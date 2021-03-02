/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface EDPageSetup : NSObject {

	int mOrientation;
	int mPageOrder;
	BOOL mCustomFirstPageNumber;
	unsigned long long mFirstPageNumber;
	unsigned long long mFitToHeight;
	unsigned long long mFitToWidth;
	unsigned long long mScale;
	float mLeftMargin;
	float mRightMargin;
	float mTopMargin;
	float mBottomMargin;
	float mHeaderMargin;
	float mFooterMargin;

}
+(id)pageSetup;
-(void)setOrder:(int)arg1 ;
-(unsigned long long)scale;
-(id)init;
-(int)order;
-(void)setOrientation:(int)arg1 ;
-(float)bottomMargin;
-(float)leftMargin;
-(void)setLeftMargin:(float)arg1 ;
-(void)setTopMargin:(float)arg1 ;
-(void)setBottomMargin:(float)arg1 ;
-(float)topMargin;
-(float)rightMargin;
-(int)orientation;
-(id)description;
-(void)setRightMargin:(float)arg1 ;
-(void)setScale:(unsigned long long)arg1 ;
-(float)headerMargin;
-(float)footerMargin;
-(void)setHeaderMargin:(float)arg1 ;
-(void)setFooterMargin:(float)arg1 ;
-(void)setFirstPageNumber:(unsigned long long)arg1 ;
-(void)setCustomFirstPageNumber:(BOOL)arg1 ;
-(void)setFitToHeight:(unsigned long long)arg1 ;
-(void)setFitToWidth:(unsigned long long)arg1 ;
-(BOOL)customFirstPageNumber;
-(unsigned long long)firstPageNumber;
-(unsigned long long)fitToHeight;
-(unsigned long long)fitToWidth;
@end
