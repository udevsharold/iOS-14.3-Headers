/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIMLFactory : NSObject
+(id)sharedInstance;
+(void)_registerElements;
+(void)_registerStyles;
+(void)_registerStylesheets;
+(void)_registerIOStyleSheets;
+(id)_urlForStyleSheetName:(id)arg1 ;
-(id)init;
-(id)imageForResource:(id)arg1 ;
-(id)URLForResource:(id)arg1 ;
-(id)_URLForResource:(id)arg1 inBundle:(id)arg2 ;
-(id)_styleSheetURLForTemplate:(id)arg1 ;
-(id)viewForElement:(id)arg1 existingView:(id)arg2 ;
-(id)viewControllerForElement:(id)arg1 existingViewController:(id)arg2 ;
-(Class)collectionViewCellClassForElement:(id)arg1 ;
-(id)imageProxyForElement:(id)arg1 withLayout:(id)arg2 ;
-(void)parseAppConfigurationForElement:(id)arg1 ;
-(id)styleSheetURLForTemplate:(id)arg1 ;
-(id)navigationControllerForTabIdentifier:(id)arg1 ;
@end
