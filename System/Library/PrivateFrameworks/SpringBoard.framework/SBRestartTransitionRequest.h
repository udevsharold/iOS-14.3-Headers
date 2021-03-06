/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, BKSDisplayRenderOverlayDescriptor, NSURL;

@interface SBRestartTransitionRequest : NSObject <BSDescriptionProviding, NSCopying> {

	NSString* _requester;
	NSString* _reason;
	int _restartType;
	double _delay;
	BOOL _wantsPersistentSnapshot;
	BKSDisplayRenderOverlayDescriptor* _customOverlayDescriptor;
	NSURL* _applicationLaunchURL;

}

@property (nonatomic,copy) NSString * requester;                                                     //@synthesize requester=_requester - In the implementation block
@property (nonatomic,copy) NSString * reason;                                                        //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) int restartType;                                                        //@synthesize restartType=_restartType - In the implementation block
@property (assign,nonatomic) double delay;                                                           //@synthesize delay=_delay - In the implementation block
@property (assign,nonatomic) BOOL wantsPersistentSnapshot;                                           //@synthesize wantsPersistentSnapshot=_wantsPersistentSnapshot - In the implementation block
@property (nonatomic,copy) BKSDisplayRenderOverlayDescriptor * customOverlayDescriptor;              //@synthesize customOverlayDescriptor=_customOverlayDescriptor - In the implementation block
@property (nonatomic,copy) NSURL * applicationLaunchURL;                                             //@synthesize applicationLaunchURL=_applicationLaunchURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelay:(double)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setRequester:(NSString *)arg1 ;
-(id)succinctDescription;
-(double)delay;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(NSString *)description;
-(NSString *)requester;
-(NSString *)reason;
-(id)succinctDescriptionBuilder;
-(void)setReason:(NSString *)arg1 ;
-(NSURL *)applicationLaunchURL;
-(void)setApplicationLaunchURL:(NSURL *)arg1 ;
-(id)initWithRequester:(id)arg1 reason:(id)arg2 ;
-(void)setRestartType:(int)arg1 ;
-(void)setWantsPersistentSnapshot:(BOOL)arg1 ;
-(void)setCustomOverlayDescriptor:(BKSDisplayRenderOverlayDescriptor *)arg1 ;
-(int)restartType;
-(BOOL)wantsPersistentSnapshot;
-(BKSDisplayRenderOverlayDescriptor *)customOverlayDescriptor;
@end

