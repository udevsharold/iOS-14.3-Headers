/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CLRegion.h>

@class NSArray;

@interface _CLPolygonalRegion : CLRegion

@property (nonatomic,copy,readonly) NSArray * vertices; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)initNearbyAllowedWithVertices:(id)arg1 identifier:(id)arg2 ;
-(id)initWithVertices:(id)arg1 identifier:(id)arg2 ;
-(NSArray *)vertices;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
@end

