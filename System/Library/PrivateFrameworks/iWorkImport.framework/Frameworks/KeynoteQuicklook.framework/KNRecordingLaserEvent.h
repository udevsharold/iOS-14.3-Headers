/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/KeynoteQuicklook.framework/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <KeynoteQuicklook/KNRecordingEvent.h>

@interface KNRecordingLaserEvent : KNRecordingEvent {

	CGPoint _unitLocation;

}

@property (nonatomic,readonly) CGPoint unitLocation;              //@synthesize unitLocation=_unitLocation - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)loadFromMessage:(const RecordingEventArchive*)arg1 unarchiver:(id)arg2 parentEventTrack:(id)arg3 ;
-(void)saveToMessage:(RecordingEventArchive*)arg1 archiver:(id)arg2 ;
-(CGPoint)unitLocation;
-(id)initWithStartTime:(double)arg1 unitLocation:(CGPoint)arg2 ;
@end

