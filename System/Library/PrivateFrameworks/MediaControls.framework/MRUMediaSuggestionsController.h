/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSDictionary, MRMediaSuggestionRequest, NSHashTable, NSCache, NSObject, MRMediaSuggestionPreferences;

@interface MRUMediaSuggestionsController : NSObject {

	BOOL _requestActive;
	NSDictionary* _suggestions;
	MRMediaSuggestionRequest* _request;
	NSHashTable* _observers;
	NSCache* _imageCache;
	NSObject*<OS_dispatch_queue> _requestQueue;
	MRMediaSuggestionPreferences* _preferences;

}

@property (nonatomic,retain) NSDictionary * suggestions;                              //@synthesize suggestions=_suggestions - In the implementation block
@property (nonatomic,retain) MRMediaSuggestionRequest * request;                      //@synthesize request=_request - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSCache * imageCache;                                    //@synthesize imageCache=_imageCache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> requestQueue;               //@synthesize requestQueue=_requestQueue - In the implementation block
@property (nonatomic,retain) MRMediaSuggestionPreferences * preferences;              //@synthesize preferences=_preferences - In the implementation block
@property (assign,nonatomic) BOOL requestActive;                                      //@synthesize requestActive=_requestActive - In the implementation block
+(id)sharedController;
+(unsigned long long)minDisplayItemCount;
-(void)setPreferences:(MRMediaSuggestionPreferences *)arg1 ;
-(NSCache *)imageCache;
-(NSObject*<OS_dispatch_queue>)requestQueue;
-(void)setRequestQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSuggestions:(NSDictionary *)arg1 ;
-(NSDictionary *)suggestions;
-(MRMediaSuggestionPreferences *)preferences;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)setImageCache:(NSCache *)arg1 ;
-(NSHashTable *)observers;
-(MRMediaSuggestionRequest *)request;
-(void)addObserver:(id)arg1 ;
-(void)setRequest:(MRMediaSuggestionRequest *)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)requestNewSuggestionsWithCompletion:(/*^block*/id)arg1 ;
-(void)notifySuggestionsDidChange:(id)arg1 ;
-(id)artworkImageForSuggestion:(id)arg1 ;
-(void)hasTimeOutElapsedForOrigin:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)suggestionsForContext:(id)arg1 ;
-(BOOL)requestActive;
-(void)setRequestActive:(BOOL)arg1 ;
@end

