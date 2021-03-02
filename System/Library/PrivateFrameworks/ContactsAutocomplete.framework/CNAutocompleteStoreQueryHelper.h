/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CNAutocompleteSearchProvider, CNAutocompleteFetchDelegate, CNScheduler, CNAutocompleteProbeProvider;
@class CNAutocompleteStoreQueryContext, CNAutocompleteUserSession;

@interface CNAutocompleteStoreQueryHelper : NSObject {

	id<CNAutocompleteSearchProvider> _searchProvider;
	id<CNAutocompleteFetchDelegate> _delegate;
	id<CNScheduler> _scheduler;
	CNAutocompleteStoreQueryContext* _queryContext;
	id<CNAutocompleteProbeProvider> _probeProvider;
	CNAutocompleteUserSession* _userSession;

}

@property (nonatomic,__weak,readonly) id<CNAutocompleteFetchDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<CNScheduler> scheduler;                                    //@synthesize scheduler=_scheduler - In the implementation block
@property (nonatomic,readonly) CNAutocompleteStoreQueryContext * queryContext;               //@synthesize queryContext=_queryContext - In the implementation block
@property (nonatomic,readonly) id<CNAutocompleteProbeProvider> probeProvider;                //@synthesize probeProvider=_probeProvider - In the implementation block
@property (nonatomic,readonly) CNAutocompleteUserSession * userSession;                      //@synthesize userSession=_userSession - In the implementation block
@property (nonatomic,readonly) id<CNAutocompleteSearchProvider> searchProvider;              //@synthesize searchProvider=_searchProvider - In the implementation block
-(CNAutocompleteStoreQueryContext *)queryContext;
-(id<CNScheduler>)scheduler;
-(CNAutocompleteUserSession *)userSession;
-(id<CNAutocompleteFetchDelegate>)delegate;
-(id<CNAutocompleteProbeProvider>)probeProvider;
-(id)initWithSearchProvider:(id)arg1 delegate:(id)arg2 probeProvider:(id)arg3 scheduler:(id)arg4 userSession:(id)arg5 ;
-(id<CNAutocompleteSearchProvider>)searchProvider;
-(id)executeFetchRequest:(id)arg1 delegate:(id)arg2 delegateToken:(id)arg3 ;
@end
