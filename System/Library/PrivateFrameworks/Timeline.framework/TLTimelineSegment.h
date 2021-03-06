/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Timeline.framework/Timeline
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Timeline/Timeline-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class TLTimelineEntryNode;

@interface TLTimelineSegment : NSObject <NSCopying, NSSecureCoding> {

	TLTimelineEntryNode* _leftmostNode;
	TLTimelineEntryNode* _rightmostNode;
	unsigned long long _count;

}

@property (nonatomic,readonly) TLTimelineEntryNode * leftmostNode;               //@synthesize leftmostNode=_leftmostNode - In the implementation block
@property (nonatomic,readonly) TLTimelineEntryNode * rightmostNode;              //@synthesize rightmostNode=_rightmostNode - In the implementation block
@property (nonatomic,readonly) unsigned long long count;                         //@synthesize count=_count - In the implementation block
@property (nonatomic,readonly) double duration; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)containsNode:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)count;
-(double)duration;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithLeftmostNode:(id)arg1 rightmostNode:(id)arg2 count:(unsigned long long)arg3 ;
-(BOOL)shiftRight;
-(BOOL)shiftLeft;
-(BOOL)expandToRight;
-(BOOL)expandToLeft;
-(BOOL)contractFromRight;
-(BOOL)contractFromLeft;
-(TLTimelineEntryNode *)leftmostNode;
-(TLTimelineEntryNode *)rightmostNode;
@end

