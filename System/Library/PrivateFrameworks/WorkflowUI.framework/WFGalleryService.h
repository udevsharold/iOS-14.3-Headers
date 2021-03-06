/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, WFImage, ICApp, WFAccessResource;

@interface WFGalleryService : NSObject {

	NSString* _name;
	WFImage* _icon;
	ICApp* _app;
	WFAccessResource* _accessResource;

}

@property (nonatomic,readonly) ICApp * app;                                    //@synthesize app=_app - In the implementation block
@property (nonatomic,readonly) WFAccessResource * accessResource;              //@synthesize accessResource=_accessResource - In the implementation block
@property (nonatomic,readonly) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) WFImage * icon;                                 //@synthesize icon=_icon - In the implementation block
+(id)serviceWithApp:(id)arg1 ;
+(id)serviceWithAccessResource:(id)arg1 ;
+(id)servicesForWorkflow:(id)arg1 ;
-(WFImage *)icon;
-(ICApp *)app;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)name;
-(void)loadIconWithCompletionHandler:(/*^block*/id)arg1 ;
-(WFAccessResource *)accessResource;
@end

