/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PRLexiconCompletion : NSObject {

	unsigned _tokenID;
	double _score;

}

@property (readonly) unsigned tokenID;              //@synthesize tokenID=_tokenID - In the implementation block
@property (readonly) double score;                  //@synthesize score=_score - In the implementation block
-(unsigned)tokenID;
-(id)description;
-(double)score;
-(id)initWithTokenID:(unsigned)arg1 score:(double)arg2 ;
@end

