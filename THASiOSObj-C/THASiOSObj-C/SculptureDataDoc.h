//
//  SculptureDataDoc.h
//  THASiOSObj-C
//
//  Created by Jim Butler on 4/6/15.
//  Copyright (c) 2015 THAS. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class SculptureData;

@interface SculptureDataDoc : NSObject

@property (strong) SculptureData *data;
@property (strong) UIImage *thumbImage;
@property (strong) UIImage *fullImage;

- (id)initWithTitle:(NSString*)title rating:(float)rating thumbImage:(UIImage *)thumbImage fullImage:(UIImage *)fullImage;

@end
