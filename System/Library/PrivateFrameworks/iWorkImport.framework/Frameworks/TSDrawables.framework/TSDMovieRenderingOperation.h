/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSReading/TSDSwatchRenderingOperation.h>

@class TSDMovieInfo;

@interface TSDMovieRenderingOperation : TSDSwatchRenderingOperation {

	TSDMovieInfo* mMovieInfo;
	BOOL mShouldClipVertically;

}

@property (retain) TSDMovieInfo * movieInfo; 
-(void)dealloc;
-(TSDMovieInfo *)movieInfo;
-(void)setMovieInfo:(TSDMovieInfo *)arg1 ;
-(void)doWorkWithReadLock;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 movieInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(BOOL)arg7 ;
-(id)initWithPreset:(id)arg1 imageSize:(CGSize)arg2 imageScale:(double)arg3 swatchFrame:(CGRect)arg4 movieInfo:(id)arg5 documentRoot:(id)arg6 ;
@end

