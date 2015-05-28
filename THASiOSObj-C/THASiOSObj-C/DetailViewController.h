//
//  DetailViewController.h
//  THASiOSObj-C
//
//  Created by Jim Butler on 4/6/15.
//  Copyright (c) 2015 THAS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SculptureDataDoc.h"
#import "GTLSculptures.h"


@class SculptureDataDoc;

@interface DetailViewController : UIViewController

@property (strong, nonatomic) GTLSculpturesSculpture* detailItem;
@property (strong) GTLSculpturesSculpture *sculpture;

@end

