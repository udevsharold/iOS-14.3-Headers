/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocation/CoreLocation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _CLLSLMapRoadSegment;

@interface _CLLSLHeadingSupplInfo : NSObject <NSCopying, NSSecureCoding> {

	_CLLSLMapRoadSegment* _roadSegment;

}

@property (nonatomic,copy) _CLLSLMapRoadSegment * roadSegment;              //@synthesize roadSegment=_roadSegment - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)descriptionWithMemberIndent:(id)arg1 endIndent:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(_CLLSLMapRoadSegment *)roadSegment;
-(void)setRoadSegment:(_CLLSLMapRoadSegment *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

