/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSApplication.framework/TSApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSApplication/TSAPdfTaggerContext.h>

@class TSDRep, TSAPdfTaggerState;

@interface TSAPdfTaggerDrawableContext : TSAPdfTaggerContext {

	TSDRep* _drawableRep;
	TSAPdfTaggerState* _taggerStateOutsideCore;

}

@property (nonatomic,readonly) TSDRep * drawableRep;                                  //@synthesize drawableRep=_drawableRep - In the implementation block
@property (nonatomic,retain) TSAPdfTaggerState * taggerStateOutsideCore;              //@synthesize taggerStateOutsideCore=_taggerStateOutsideCore - In the implementation block
-(id)initWithStateOfTagger:(id)arg1 drawableRep:(id)arg2 ;
-(TSDRep *)drawableRep;
-(TSAPdfTaggerState *)taggerStateOutsideCore;
-(void)setTaggerStateOutsideCore:(TSAPdfTaggerState *)arg1 ;
@end
