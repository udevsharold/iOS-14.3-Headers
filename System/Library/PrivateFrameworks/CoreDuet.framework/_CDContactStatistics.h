/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface _CDContactStatistics : NSObject <NSSecureCoding> {

	unsigned long long _outgoingRecipientCount;
	unsigned long long _incomingSenderCount;
	unsigned long long _incomingRecipientCount;
	NSDate* _lastOutgoingRecipientDate;
	NSDate* _lastIncomingSenderDate;
	NSDate* _lastIncomingRecipientDate;
	NSDate* _firstOutgoingRecipientDate;
	NSDate* _firstIncomingSenderDate;
	NSDate* _firstIncomingRecipientDate;

}

@property (assign) unsigned long long outgoingRecipientCount;              //@synthesize outgoingRecipientCount=_outgoingRecipientCount - In the implementation block
@property (assign) unsigned long long incomingSenderCount;                 //@synthesize incomingSenderCount=_incomingSenderCount - In the implementation block
@property (assign) unsigned long long incomingRecipientCount;              //@synthesize incomingRecipientCount=_incomingRecipientCount - In the implementation block
@property (retain) NSDate * lastOutgoingRecipientDate;                     //@synthesize lastOutgoingRecipientDate=_lastOutgoingRecipientDate - In the implementation block
@property (retain) NSDate * lastIncomingSenderDate;                        //@synthesize lastIncomingSenderDate=_lastIncomingSenderDate - In the implementation block
@property (retain) NSDate * lastIncomingRecipientDate;                     //@synthesize lastIncomingRecipientDate=_lastIncomingRecipientDate - In the implementation block
@property (retain) NSDate * firstOutgoingRecipientDate;                    //@synthesize firstOutgoingRecipientDate=_firstOutgoingRecipientDate - In the implementation block
@property (retain) NSDate * firstIncomingSenderDate;                       //@synthesize firstIncomingSenderDate=_firstIncomingSenderDate - In the implementation block
@property (retain) NSDate * firstIncomingRecipientDate;                    //@synthesize firstIncomingRecipientDate=_firstIncomingRecipientDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)lastIncomingSenderDate;
-(void)setLastOutgoingRecipientDate:(NSDate *)arg1 ;
-(unsigned long long)incomingRecipientCount;
-(void)setFirstIncomingSenderDate:(NSDate *)arg1 ;
-(void)setIncomingRecipientCount:(unsigned long long)arg1 ;
-(id)firstInteractionDate;
-(unsigned long long)incomingSenderCount;
-(void)updateWithStatistics:(id)arg1 ;
-(void)setLastIncomingRecipientDate:(NSDate *)arg1 ;
-(id)lastInteractionDate;
-(NSDate *)firstIncomingSenderDate;
-(id)initWithCoder:(id)arg1 ;
-(void)setFirstOutgoingRecipientDate:(NSDate *)arg1 ;
-(id)description;
-(double)outgoingRecipientTimeInterval;
-(NSDate *)firstIncomingRecipientDate;
-(unsigned long long)interactionCount;
-(NSDate *)firstOutgoingRecipientDate;
-(id)lastDate:(id)arg1 updatedWith:(id)arg2 ;
-(double)incomingRecipientTimeInterval;
-(NSDate *)lastOutgoingRecipientDate;
-(void)setIncomingSenderCount:(unsigned long long)arg1 ;
-(id)firstDate:(id)arg1 updatedWith:(id)arg2 ;
-(NSDate *)lastIncomingRecipientDate;
-(void)setOutgoingRecipientCount:(unsigned long long)arg1 ;
-(double)interactionTimeInterval;
-(void)setLastIncomingSenderDate:(NSDate *)arg1 ;
-(void)setFirstIncomingRecipientDate:(NSDate *)arg1 ;
-(unsigned long long)outgoingRecipientCount;
-(double)incomingSenderTimeInterval;
-(void)encodeWithCoder:(id)arg1 ;
@end
