/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /usr/lib/libcoreroutine.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RTStateModelOneState, RTStateModelEntryExit;

@interface RTMigrationHelperOneStateAndEntryExitPair : NSObject {

	RTStateModelOneState* _oneState;
	RTStateModelEntryExit* _entryExit;

}

@property (nonatomic,retain) RTStateModelOneState * oneState;                //@synthesize oneState=_oneState - In the implementation block
@property (nonatomic,retain) RTStateModelEntryExit * entryExit;              //@synthesize entryExit=_entryExit - In the implementation block
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(RTStateModelOneState *)oneState;
-(RTStateModelEntryExit *)entryExit;
-(id)initWithOneState:(id)arg1 entryExit:(id)arg2 ;
-(void)setOneState:(RTStateModelOneState *)arg1 ;
-(void)setEntryExit:(RTStateModelEntryExit *)arg1 ;
@end

