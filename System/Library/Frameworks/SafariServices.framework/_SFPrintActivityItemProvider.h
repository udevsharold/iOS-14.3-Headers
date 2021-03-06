/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariServices/_SFActivityItemProvider.h>
#import <UIKit/UIActivityItemsSource.h>

@class UIPrintPageRenderer, NSItemProvider, LPFileMetadata, _SFPrintController, NSString;

@interface _SFPrintActivityItemProvider : _SFActivityItemProvider <UIActivityItemsSource> {

	UIPrintPageRenderer* _printPageRenderer;
	NSItemProvider* _pdfItemProvider;
	LPFileMetadata* _linkPreviewFileMetadata;
	BOOL _hasReservedPrintInteractionController;
	BOOL _canVendPDFRepresentation;
	_SFPrintController* _printController;

}

@property (nonatomic,readonly) _SFPrintController * printController;                    //@synthesize printController=_printController - In the implementation block
@property (nonatomic,readonly) BOOL hasReservedPrintInteractionController;              //@synthesize hasReservedPrintInteractionController=_hasReservedPrintInteractionController - In the implementation block
@property (assign,nonatomic) BOOL canVendPDFRepresentation;                             //@synthesize canVendPDFRepresentation=_canVendPDFRepresentation - In the implementation block
@property (nonatomic,readonly) NSItemProvider * pdfItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)item;
-(_SFPrintController *)printController;
-(NSItemProvider *)pdfItemProvider;
-(id)initWithPrintController:(id)arg1 webView:(id)arg2 ;
-(BOOL)hasReservedPrintInteractionController;
-(BOOL)canVendPDFRepresentation;
-(void)setCanVendPDFRepresentation:(BOOL)arg1 ;
-(id)activityViewControllerLinkMetadata:(id)arg1 ;
-(id)activityViewControllerPlaceholderItems:(id)arg1 ;
-(id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2 ;
@end

