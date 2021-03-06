/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSInvalidatable.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class SBWallpaperViewController, NSString;

@interface _SBWallpaperViewControllerAssertion : NSObject <BSInvalidatable, BSDescriptionProviding> {

	BOOL _invalidated;
	SBWallpaperViewController* _wallpaperViewController;
	long long _type;
	NSString* _reason;

}

@property (assign,getter=isInvalidated,nonatomic) BOOL invalidated;                                     //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,__weak,readonly) SBWallpaperViewController * wallpaperViewController;              //@synthesize wallpaperViewController=_wallpaperViewController - In the implementation block
@property (readonly) long long type;                                                                    //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                                  //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithWallpaperViewController:(id)arg1 type:(long long)arg2 reason:(id)arg3 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)setInvalidated:(BOOL)arg1 ;
-(void)dealloc;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(BOOL)isInvalidated;
-(NSString *)description;
-(long long)type;
-(NSString *)reason;
-(id)succinctDescriptionBuilder;
-(SBWallpaperViewController *)wallpaperViewController;
-(void)invalidate;
@end

