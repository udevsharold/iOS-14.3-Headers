/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompleteObservableBuilderBatchingHelper <NSObject>
@required
-(BOOL)batchAtIndexIncludesServer:(unsigned long long)arg1;
-(id)batchedObservables;
-(void)addContactsObservable:(id)arg1;
-(void)addCoreRecentsObservable:(id)arg1;
-(void)addSuggestionsObservable:(id)arg1;
-(void)addLocalExtensionObservable:(id)arg1;
-(void)addDuetObservable:(id)arg1;
-(void)addSupplementalObservable:(id)arg1;
-(void)addCachedDirectoryServerObservable:(id)arg1;
-(void)addDirectoryServerObservable:(id)arg1;
-(void)addCachedCalendarServerObservable:(id)arg1;
-(void)addCalendarServerObservable:(id)arg1;

@end

