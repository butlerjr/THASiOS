//
//  MasterViewController.h
//  THASiOSObj-C
//
//  Created by Jim Butler on 4/6/15.
//  Copyright (c) 2015 THAS. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong) NSMutableArray *bugs;

@end

