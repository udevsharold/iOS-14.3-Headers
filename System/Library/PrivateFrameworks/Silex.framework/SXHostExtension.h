/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXHost.h>

@class NSExtensionContext, NSString;

@interface SXHostExtension : NSObject <SXHost> {

	BOOL _isActive;
	NSExtensionContext* _extensionContext;

}

@property (assign,nonatomic,__weak) NSExtensionContext * extensionContext;              //@synthesize extensionContext=_extensionContext - In the implementation block
@property (assign,nonatomic) BOOL isActive;                                             //@synthesize isActive=_isActive - In the implementation block
@property (nonatomic,readonly) BOOL active; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)active;
-(BOOL)canOpenURL:(id)arg1 ;
-(BOOL)isActive;
-(NSExtensionContext *)extensionContext;
-(void)openURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setExtensionContext:(NSExtensionContext *)arg1 ;
-(void)setIsActive:(BOOL)arg1 ;
-(void)extensionHostDidBecomeActive:(id)arg1 ;
-(void)extensionHostDidEnterBackground:(id)arg1 ;
-(void)extensionHostWillEnterForeground:(id)arg1 ;
-(id)initWithExtensionContext:(id)arg1 ;
@end

