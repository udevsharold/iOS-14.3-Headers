/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class NSString, NSDictionary, AMSUIWebClientContext;

@interface AMSUIWebCallbackAction : NSObject <AMSUIWebActionRunnable> {

	NSString* _service;
	NSDictionary* _data;
	AMSUIWebClientContext* _context;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) NSString * service;                           //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSDictionary * data;                          //@synthesize data=_data - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)data;
-(NSString *)service;
-(void)setData:(NSDictionary *)arg1 ;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(AMSUIWebClientContext *)context;
-(void)setService:(NSString *)arg1 ;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
@end

