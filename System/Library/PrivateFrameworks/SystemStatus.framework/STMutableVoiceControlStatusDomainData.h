/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SystemStatus/SystemStatus-Structs.h>
#import <SystemStatus/STVoiceControlStatusDomainData.h>
#import <libobjc.A.dylib/STMutableStatusDomainDataDifferencing.h>
#import <libobjc.A.dylib/STMutableStatusDomainData.h>

@class NSString;

@interface STMutableVoiceControlStatusDomainData : STVoiceControlStatusDomainData <STMutableStatusDomainDataDifferencing, STMutableStatusDomainData>

@property (assign,getter=isVoiceControlActive,nonatomic) BOOL voiceControlActive; 
@property (assign,nonatomic) unsigned long long listeningState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)applyDiff:(id)arg1 ;
-(void)setVoiceControlActive:(BOOL)arg1 ;
-(void)setListeningState:(unsigned long long)arg1 ;
@end
