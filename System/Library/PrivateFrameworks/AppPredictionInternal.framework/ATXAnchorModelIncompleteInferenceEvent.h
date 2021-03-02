/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, ATXDuetEvent, NSDate, NSNumber, ATXAnchor;

@interface ATXAnchorModelIncompleteInferenceEvent : NSObject <NSSecureCoding> {

	NSString* _anchorClassString;
	ATXDuetEvent* _anchorEvent;
	NSDate* _dateFirstAdded;
	NSNumber* _retryCount;

}

@property (nonatomic,readonly) ATXAnchor * anchor; 
@property (nonatomic,readonly) ATXDuetEvent * anchorEvent;              //@synthesize anchorEvent=_anchorEvent - In the implementation block
@property (nonatomic,readonly) NSDate * dateFirstAdded;                 //@synthesize dateFirstAdded=_dateFirstAdded - In the implementation block
@property (nonatomic,retain) NSNumber * retryCount;                     //@synthesize retryCount=_retryCount - In the implementation block
+(BOOL)supportsSecureCoding;
-(ATXAnchor *)anchor;
-(void)setRetryCount:(NSNumber *)arg1 ;
-(NSNumber *)retryCount;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithAnchor:(id)arg1 anchorEvent:(id)arg2 ;
-(ATXDuetEvent *)anchorEvent;
-(id)initWithAnchorClassString:(id)arg1 anchorEvent:(id)arg2 dateFirstAdded:(id)arg3 retryCount:(id)arg4 ;
-(NSDate *)dateFirstAdded;
@end
