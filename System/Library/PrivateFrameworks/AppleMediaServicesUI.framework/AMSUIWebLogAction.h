/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSUIWebActionRunnable.h>

@class AMSUIWebClientContext, NSString;

@interface AMSUIWebLogAction : NSObject <AMSUIWebActionRunnable> {

	AMSUIWebClientContext* _context;
	long long _level;
	NSString* _message;

}

@property (nonatomic,retain) AMSUIWebClientContext * context;              //@synthesize context=_context - In the implementation block
@property (assign,nonatomic) long long level;                              //@synthesize level=_level - In the implementation block
@property (nonatomic,retain) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)message;
-(void)setLevel:(long long)arg1 ;
-(long long)level;
-(void)setMessage:(NSString *)arg1 ;
-(void)setContext:(AMSUIWebClientContext *)arg1 ;
-(AMSUIWebClientContext *)context;
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(id)runAction;
-(unsigned char)_logTypeFromLevel:(long long)arg1 ;
@end

