/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SGModelSource, PMLSparseVector;

@interface SGModelFeatures : NSObject {

	SGModelSource* _source;
	PMLSparseVector* _vector;

}
-(id)vector;
-(id)source;
-(id)sessionDescriptor;
-(id)initWithSource:(id)arg1 vector:(id)arg2 ;
@end
