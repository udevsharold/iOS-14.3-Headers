/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSSet, NSDictionary, NSObject, NSMutableSet, NSMutableDictionary;

@interface SSMetricsConfiguration : NSObject {

	NSSet* _blacklistedEvents;
	SSMetricsConfiguration* _childConfiguration;
	NSDictionary* _config;
	BOOL _disabled;
	BOOL _disableEventDecoration;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSMutableSet* _cookieFieldsUnion;
	NSMutableDictionary* _eventFieldsUnion;
	NSDictionary* _fields;
	int _internalSettingsToken;
	id _reportingFrequencyOverride;
	BOOL _sendDisabled;

}

@property (nonatomic,readonly) NSDictionary * fieldsMap; 
@property (nonatomic,retain) SSMetricsConfiguration * childConfiguration;              //@synthesize childConfiguration=_childConfiguration - In the implementation block
@property (assign,nonatomic) BOOL disableEventDecoration;                              //@synthesize disableEventDecoration=_disableEventDecoration - In the implementation block
+(void)setReportingFrequencyOverride:(id)arg1 ;
+(id)_reportingFrequencyOverride;
+(void)getReportingFrequencyOverrideWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isDisabled;
-(BOOL)isSendDisabled;
-(BOOL)_configBooleanForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(BOOL)isEventTypeBlacklisted:(id)arg1 ;
-(id)compoundStringWithElements:(id)arg1 ;
-(BOOL)_decorateITMLEvents;
-(void)dealloc;
-(void)setDisableEventDecoration:(BOOL)arg1 ;
-(id)initWithGlobalConfiguration:(id)arg1 ;
-(id)eventFields;
-(SSMetricsConfiguration *)childConfiguration;
-(id)initWithStorePlatformData:(id)arg1 ;
-(id)blacklistedEventFields;
-(id)tokenStringWithElements:(id)arg1 ;
-(void)_setReportingFrequencyOverride:(id)arg1 ;
-(NSDictionary *)fieldsMap;
-(double)reportingFrequency;
-(BOOL)disableEventDecoration;
-(void)setChildConfiguration:(SSMetricsConfiguration *)arg1 ;
-(id)pingURLs;
-(id)_initSSMetricsEventConfiguration;
-(id)valueForConfigurationKey:(id)arg1 ;
-(id)cookieFields;
-(id)reportingURLString;
@end

