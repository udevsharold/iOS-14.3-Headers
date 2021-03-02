/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSParseObject.h>

@class IKArray, IKCSSParseBlock;

@interface IKCSSParseRule : IKCSSParseObject {

	IKArray* _prelude;
	IKCSSParseBlock* _block;
	NSRange __endRange;

}

@property (assign,setter=_setEndRange:,nonatomic) NSRange _endRange;              //@synthesize _endRange=__endRange - In the implementation block
@property (nonatomic,retain) IKArray * prelude;                                   //@synthesize prelude=_prelude - In the implementation block
@property (nonatomic,retain) IKCSSParseBlock * block;                             //@synthesize block=_block - In the implementation block
-(NSRange)range;
-(id)init;
-(IKCSSParseBlock *)block;
-(id)description;
-(IKArray *)prelude;
-(void)setBlock:(IKCSSParseBlock *)arg1 ;
-(NSRange)_endRange;
-(void)setPrelude:(IKArray *)arg1 ;
-(void)_setEndRange:(NSRange)arg1 ;
@end
