/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/VCVideoRuleCollectionsMoments.h>

@protocol VCHardwareSettingsMacProtocol;
@interface VCVideoRuleCollectionsMomentsMac : VCVideoRuleCollectionsMoments {

	id<VCHardwareSettingsMacProtocol> _hardwareSettings;

}
+(id)sharedInstance;
-(int)getMomentsCapabilities;
-(id)initWithHardwareSettings:(id)arg1 ;
-(id)getMomentsVideoCodecs;
-(id)getMomentsImageTypes;
@end
