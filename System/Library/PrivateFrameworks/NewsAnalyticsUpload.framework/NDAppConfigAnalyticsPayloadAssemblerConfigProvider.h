/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsAnalyticsUpload.framework/NewsAnalyticsUpload
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NDAnalyticsPayloadAssemblerConfigProvider.h>

@protocol FCNewsAppConfigurationManager;
@interface NDAppConfigAnalyticsPayloadAssemblerConfigProvider : NSObject <NDAnalyticsPayloadAssemblerConfigProvider> {

	id<FCNewsAppConfigurationManager> _appConfigurationManager;

}

@property (nonatomic,retain) id<FCNewsAppConfigurationManager> appConfigurationManager;              //@synthesize appConfigurationManager=_appConfigurationManager - In the implementation block
-(id<FCNewsAppConfigurationManager>)appConfigurationManager;
-(id)init;
-(void)fetchConfigWithCompletion:(/*^block*/id)arg1 ;
-(void)setAppConfigurationManager:(id<FCNewsAppConfigurationManager>)arg1 ;
-(id)initWithAppConfigurationManager:(id)arg1 ;
@end

