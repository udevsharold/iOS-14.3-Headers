/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:33 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VUIDocumentCreator.h>
#import <libobjc.A.dylib/_TVInterfaceCreatingPrivate.h>

@interface VideosUI.UIFactory : NSObject <VUIDocumentCreator, _TVInterfaceCreatingPrivate>
-(id)imageForResource:(id)arg1 ;
-(id)URLForResource:(id)arg1 ;
-(id)viewControllerWithDocumentDataSource:(id)arg1 appContext:(id)arg2 viewElement:(id)arg3 documentOptions:(id)arg4 ;
-(BOOL)isDocumentViewController:(id)arg1 equalToViewController:(id)arg2 ;
-(id)_styleSheetURLForTemplate:(id)arg1 ;
-(id)_viewForIKElement:(id)arg1 existingView:(id)arg2 ;
-(id)_viewControllerForIKElement:(id)arg1 existingViewController:(id)arg2 ;
-(Class)_collectionViewCellClassForIKElement:(id)arg1 ;
-(void)_parseAppConfigurationForIKElement:(id)arg1 ;
-(id)_imageProxyForIKElement:(id)arg1 withLayout:(id)arg2 ;
-(id)init;
@end
