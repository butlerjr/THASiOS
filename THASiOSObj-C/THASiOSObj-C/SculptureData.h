//
//  SculptureData.h
//  THASiOSObj-C
//
//  Created by Jim Butler on 4/6/15.
//  Copyright (c) 2015 THAS. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SculptureData : NSObject

@property (strong) NSString *title;
@property (assign) float rating;

- (id)initWithTitle:(NSString*)title rating:(float)rating;

@end
