//
//  DetailViewController.h
//  THASiOSObj-C
//
//  Created by Jim Butler on 4/6/15.
//  Copyright (c) 2015 THAS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SculptureDataDoc.h"


@class SculptureDataDoc;

@interface DetailViewController : UIViewController

@property (strong, nonatomic) SculptureDataDoc* detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (strong) SculptureDataDoc *sculpture;

@end

