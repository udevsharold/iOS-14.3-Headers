/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class VSDeveloperSettings, VSOptional, VSDeveloperServiceConnection;

@interface VSDeveloperSettingsUpdateOperation : VSAsyncOperation {

	VSDeveloperSettings* _settings;
	VSOptional* _result;
	VSDeveloperServiceConnection* _connection;

}

@property (nonatomic,retain) VSOptional * result;                                    //@synthesize result=_result - In the implementation block
@property (nonatomic,retain) VSDeveloperServiceConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy) VSDeveloperSettings * settings;                           //@synthesize settings=_settings - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(VSOptional *)result;
-(id)init;
-(void)setSettings:(VSDeveloperSettings *)arg1 ;
-(void)setConnection:(VSDeveloperServiceConnection *)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(void)executionDidBegin;
-(VSDeveloperSettings *)settings;
-(VSDeveloperServiceConnection *)connection;
@end

