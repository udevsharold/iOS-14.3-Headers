/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SplashBoard/SplashBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class BSMutableSettings, NSString, XBDisplayEdgeInsetsWrapper;

@interface XBApplicationSnapshotPredicate : NSObject <BSDescriptionProviding> {

	BSMutableSettings* _clientSettings;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * scheme; 
@property (nonatomic,copy) NSString * launchInterfaceIdentifier; 
@property (nonatomic,copy) NSString * requiredOSVersion; 
@property (assign,nonatomic) unsigned long long interfaceOrientationMask; 
@property (assign,nonatomic) CGSize referenceSize; 
@property (assign,nonatomic) double imageScale; 
@property (assign,nonatomic) unsigned long long contentTypeMask; 
@property (assign,nonatomic) unsigned long long statusBarStateMask; 
@property (assign,nonatomic) long long userInterfaceStyle; 
@property (nonatomic,copy) XBDisplayEdgeInsetsWrapper * customSafeAreaInsets; 
@property (assign,getter=isFullScreen,nonatomic) BOOL fullScreen; 
@property (assign,nonatomic) unsigned long long statusBarState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)predicate;
-(NSString *)requiredOSVersion;
-(void)setImageScale:(double)arg1 ;
-(void)setStatusBarState:(unsigned long long)arg1 ;
-(BOOL)isFullScreen;
-(NSString *)launchInterfaceIdentifier;
-(void)setFullScreen:(BOOL)arg1 ;
-(NSString *)scheme;
-(void)setScheme:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(CGSize)referenceSize;
-(void)setRequiredOSVersion:(NSString *)arg1 ;
-(id)init;
-(void)setReferenceSize:(CGSize)arg1 ;
-(unsigned long long)statusBarStateMask;
-(BOOL)_hasClientObjectForKey:(unsigned long long)arg1 ;
-(XBDisplayEdgeInsetsWrapper *)customSafeAreaInsets;
-(void)setStatusBarStateMask:(unsigned long long)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setCustomSafeAreaInsets:(XBDisplayEdgeInsetsWrapper *)arg1 ;
-(void)setUserInterfaceStyle:(long long)arg1 ;
-(unsigned long long)statusBarState;
-(unsigned long long)contentTypeMask;
-(void)setLaunchInterfaceIdentifier:(NSString *)arg1 ;
-(void)_removeClientObjectForKey:(unsigned long long)arg1 ;
-(long long)userInterfaceStyle;
-(id)succinctDescription;
-(id)_clientObjectForKey:(unsigned long long)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)setContentTypeMask:(unsigned long long)arg1 ;
-(void)_setClientObject:(id)arg1 forKey:(unsigned long long)arg2 ;
-(void)setInterfaceOrientationMask:(unsigned long long)arg1 ;
-(NSString *)description;
-(id)succinctDescriptionBuilder;
-(double)imageScale;
-(NSString *)name;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(unsigned long long)interfaceOrientationMask;
@end
