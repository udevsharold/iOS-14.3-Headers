/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface _CNAutocompleteObservableBuilderBatchingHelper : NSObject {

	NSArray* _batches;

}

@property (nonatomic,readonly) NSArray * batches;              //@synthesize batches=_batches - In the implementation block
-(NSArray *)batches;
-(id)initWithBatchCount:(unsigned long long)arg1 ;
-(id)batchedObservables;
-(void)addObservable:(id)arg1 toBatchAtIndex:(unsigned long long)arg2 ;
@end
