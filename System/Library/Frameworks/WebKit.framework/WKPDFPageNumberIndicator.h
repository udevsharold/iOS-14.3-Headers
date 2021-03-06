/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKitCore/UIView.h>

@interface WKPDFPageNumberIndicator : UIView {

	RetainPtr<UILabel>* _label;
	RetainPtr<_UIBackdropView>* _backdropView;
	RetainPtr<NSTimer>* _timer;
	BOOL _hasValidPageCountAndCurrentPage;
	unsigned _currentPageNumber;
	unsigned _pageCount;

}

@property (assign,nonatomic) unsigned currentPageNumber;              //@synthesize currentPageNumber=_currentPageNumber - In the implementation block
@property (assign,nonatomic) unsigned pageCount;                      //@synthesize pageCount=_pageCount - In the implementation block
-(void)show;
-(void)setCurrentPageNumber:(unsigned)arg1 ;
-(void)moveToPoint:(CGPoint)arg1 animated:(BOOL)arg2 ;
-(unsigned)currentPageNumber;
-(void)_updateLabel;
-(void)dealloc;
-(unsigned)pageCount;
-(void)_makeRoundedCorners;
-(void)setPageCount:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)hide:(id)arg1 ;
-(void)hide;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

