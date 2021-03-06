/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UICanvasBasedObject.h>

@class UIWindowScene, NSDictionary, NSString;

@interface UITextEffectsHostingInfo : NSObject <_UICanvasBasedObject> {

	unsigned long long _hostedUseCount;
	UIWindowScene* _scene;
	NSDictionary* _perSceneOptions;

}

@property (nonatomic,retain) NSDictionary * perSceneOptions;              //@synthesize perSceneOptions=_perSceneOptions - In the implementation block
@property (nonatomic,retain) UIWindowScene * scene;                       //@synthesize scene=_scene - In the implementation block
@property (assign,nonatomic) BOOL useHostedInstance; 
@property (readonly) UIWindowScene * _intendedCanvas; 
@property (readonly) NSDictionary * _options; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)hostingInfoForWindowScene:(id)arg1 ;
-(id)_initWithCanvas:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)_options;
-(BOOL)_matchingOptions:(id)arg1 ;
-(UIWindowScene *)_intendedCanvas;
-(NSDictionary *)perSceneOptions;
-(void)setScene:(UIWindowScene *)arg1 ;
-(void)setPerSceneOptions:(NSDictionary *)arg1 ;
-(void)setUseHostedInstance:(BOOL)arg1 ;
-(BOOL)useHostedInstance;
-(UIWindowScene *)scene;
@end

