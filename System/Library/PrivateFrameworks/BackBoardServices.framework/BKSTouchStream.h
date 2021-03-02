/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BKSTouchStream : NSObject {

	unsigned _reference;

}

@property (assign) unsigned reference;              //@synthesize reference=_reference - In the implementation block
-(void)setReference:(unsigned)arg1 ;
-(void)setEventDispatchMode:(unsigned char)arg1 lastTouchTimestamp:(double)arg2 ;
-(void)setEventDispatchMode:(unsigned char)arg1 ambiguityRecommendation:(unsigned char)arg2 lastTouchTimestamp:(double)arg3 ;
-(unsigned)reference;
-(id)initWithContextID:(unsigned)arg1 displayUUID:(id)arg2 identifier:(unsigned char)arg3 policy:(id)arg4 ;
-(void)invalidate;
@end
