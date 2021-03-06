/* This file was generated by the ServiceGenerator.
 * The ServiceGenerator is Copyright (c) 2015 Google Inc.
 */

//
//  GTLSculpturesComment.h
//

// ----------------------------------------------------------------------------
// NOTE: This file is generated from Google APIs Discovery Service.
// Service:
//   sculptures/v1
// Description:
//   Sculpture API
// Classes:
//   GTLSculpturesComment (0 custom class methods, 5 custom properties)

#if GTL_BUILT_AS_FRAMEWORK
  #import "GTL/GTLObject.h"
#else
  #import "GTLObject.h"
#endif

// ----------------------------------------------------------------------------
//
//   GTLSculpturesComment
//

@interface GTLSculpturesComment : GTLObject
@property (nonatomic, copy) NSString *author;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *entityKey;
@property (nonatomic, copy) NSString *sculptureKey;
@property (nonatomic, copy) NSString *timestamp;
@end
