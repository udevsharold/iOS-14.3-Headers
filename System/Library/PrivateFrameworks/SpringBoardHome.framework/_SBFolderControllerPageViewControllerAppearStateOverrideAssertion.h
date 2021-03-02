/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSString, SBFolderController;

@interface _SBFolderControllerPageViewControllerAppearStateOverrideAssertion : NSObject <BSInvalidatable, BSDescriptionProviding> {

	BOOL _invalidated;
	NSString* _reason;
	SBFolderController* _folderController;

}

@property (nonatomic,__weak,readonly) SBFolderController * folderController;              //@synthesize folderController=_folderController - In the implementation block
@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                       //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                    //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBFolderController *)folderController;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)dealloc;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isInvalidated;
-(id)initWithFolderController:(id)arg1 reason:(id)arg2 ;
-(NSString *)reason;
-(id)succinctDescriptionBuilder;
-(void)invalidate;
@end
