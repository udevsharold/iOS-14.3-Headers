/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Memories/Memories-Structs.h>
@class NSMutableArray, NSArray;

@interface MiroAnalysisTitleColorFinder : NSObject {

	int _height;
	int _width;
	int _heightOrg;
	int _widthOrg;
	char* _binIndexMap;
	float* _imageDataHSV;
	int _bpr;
	float _fv[36];
	vector<int, std::__1::allocator<int> >* _dominantColorIndex;
	vector<int, std::__1::allocator<int> >* _popupColorIndex;
	NSMutableArray* _dominantColor;
	NSMutableArray* _popupColor;
	int _startHeight;
	int _endHeight;
	int _startWidth;
	int _endWidth;
	int _photoType;
	CGRect _ROI;
	CGAffineTransform _transformFromOrientation;
	CGSize _UIImageSize;

}

@property (nonatomic,readonly) CGRect nativeImageBounds; 
@property (nonatomic,copy,readonly) NSArray * dominantColors; 
@property (nonatomic,copy,readonly) NSArray * popupColors; 
-(void)_commonInit;
-(id)init;
-(void)dealloc;
-(void)setRegionOfInterest:(CGRect)arg1 ;
-(id)initWithUIImage:(id)arg1 ;
-(void)buildModel:(CGImageRef)arg1 ;
-(void)analyzeUIImage:(id)arg1 ;
-(void)analyzeCGImage:(CGImageRef)arg1 orientation:(long long)arg2 ;
-(void)rgb2hsv:(float)arg1 g:(float)arg2 b:(float)arg3 h:(float*)arg4 s:(float*)arg5 v:(float*)arg6 ;
-(void)mappingROI;
-(void)findDominantPopupColor:(float*)arg1 ;
-(void)findColorHSV;
-(void)findPeaks:(float*)arg1 startIndex:(int)arg2 ;
-(id)initWithCGImage:(CGImageRef)arg1 orientation:(long long)arg2 ;
-(CGRect)nativeImageBounds;
-(NSArray *)dominantColors;
-(NSArray *)popupColors;
@end
