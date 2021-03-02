/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoComplicationSettings.framework/NanoComplicationSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoComplicationSettings/NCSInternalSettingsManager.h>

@protocol NCSSettingsManagerDelegate;
@interface NCSSettingsManager : NCSInternalSettingsManager {

	id<NCSSettingsManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<NCSSettingsManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedSettingsManager;
-(void)loadSettings;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id<NCSSettingsManagerDelegate>)arg1 ;
-(id<NCSSettingsManagerDelegate>)delegate;
-(void)_handleLocaleChange:(id)arg1 ;
-(void)_updateSockPuppetComplications;
-(id)_fetchSockPuppetComplications;
@end
