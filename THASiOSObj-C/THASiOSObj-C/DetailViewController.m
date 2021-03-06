//
//  DetailViewController.m
//  THASiOSObj-C
//
//  Created by Jim Butler on 4/6/15.
//  Copyright (c) 2015 THAS. All rights reserved.
//

#import "DetailViewController.h"

@interface DetailViewController ()
@property (weak, nonatomic) IBOutlet UIImageView *imageBox;

@property (weak, nonatomic) IBOutlet UILabel *detailDescription;
@property (weak, nonatomic) IBOutlet UILabel *artistName;

@end

@implementation DetailViewController

#pragma mark - Managing the detail item

- (void)setDetailItem:(GTLSculpturesSculpture*)newDetailItem {
    if (_detailItem != newDetailItem) {
        _detailItem = newDetailItem;
            
        // Update the view.
        [self configureView];
    }
}

- (void)configureView {
    // Update the user interface for the detail item.
    if (self.detailItem) {
        NSString *image_url = [self.detailItem JSONValueForKey: @"image"];
        NSURL *url = [NSURL URLWithString:image_url];
        NSData *data = [NSData dataWithContentsOfURL:url];
        UIImage *image = [UIImage imageWithData:data];
        UIImage *img = image;
        self.imageBox.image = img;
        NSString *title = [self.detailItem JSONValueForKey: @"title"];
        self.detailDescription.text = title;
        NSString *artist = [self.detailItem JSONValueForKey: @"artist"];
        self.artistName.text = artist;
        
    }
}

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [self configureView];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
