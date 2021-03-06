/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSURL, NSObject, NSMutableDictionary, NSArray;

@interface VUIPlistMediaDatabase : NSObject {

	NSURL* _fileURL;
	NSObject*<OS_dispatch_queue> _serialDispatchQueue;
	NSObject*<OS_dispatch_source> _databaseFileDispatchSource;
	NSMutableDictionary* _homeVideoByIdentifier;
	NSMutableDictionary* _movieByIdentifier;
	NSMutableDictionary* _movieRentalByIdentifier;
	NSMutableDictionary* _showByIdentifier;

}

@property (nonatomic,copy) NSURL * fileURL;                                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialDispatchQueue;                      //@synthesize serialDispatchQueue=_serialDispatchQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> databaseFileDispatchSource;              //@synthesize databaseFileDispatchSource=_databaseFileDispatchSource - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * homeVideoByIdentifier;                           //@synthesize homeVideoByIdentifier=_homeVideoByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * movieByIdentifier;                               //@synthesize movieByIdentifier=_movieByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * movieRentalByIdentifier;                         //@synthesize movieRentalByIdentifier=_movieRentalByIdentifier - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * showByIdentifier;                                //@synthesize showByIdentifier=_showByIdentifier - In the implementation block
@property (nonatomic,readonly) NSArray * homeVideos; 
@property (nonatomic,readonly) NSArray * movies; 
@property (nonatomic,readonly) NSArray * movieRentals; 
@property (nonatomic,readonly) NSArray * shows; 
@property (nonatomic,readonly) NSArray * seasons; 
@property (nonatomic,readonly) NSArray * episodes; 
+(id)_sortedEntitiesArray:(id)arg1 ;
+(void)_addItem:(id)arg1 itemByIdentifier:(id)arg2 ;
+(void)_removeItem:(id)arg1 itemByIdentifier:(id)arg2 ;
-(void)setFileURL:(NSURL *)arg1 ;
-(id)entityForIdentifier:(id)arg1 ;
-(id)init;
-(NSArray *)movies;
-(NSArray *)shows;
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(id)itemForIdentifier:(id)arg1 ;
-(unsigned long long)hash;
-(NSURL *)fileURL;
-(NSArray *)seasons;
-(BOOL)isEqual:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(BOOL)_saveWithError:(out id*)arg1 ;
-(id)_seasons;
-(NSArray *)episodes;
-(NSObject*<OS_dispatch_queue>)serialDispatchQueue;
-(NSArray *)movieRentals;
-(NSArray *)homeVideos;
-(BOOL)_parseDatabase;
-(void)_startMonitoringDatabaseFile;
-(NSMutableDictionary *)movieByIdentifier;
-(NSMutableDictionary *)movieRentalByIdentifier;
-(NSMutableDictionary *)homeVideoByIdentifier;
-(NSMutableDictionary *)showByIdentifier;
-(void)_addShow:(id)arg1 ;
-(void)_addSeason:(id)arg1 showIdentifier:(id)arg2 ;
-(void)_addEpisode:(id)arg1 showIdentifier:(id)arg2 seasonIdentifier:(id)arg3 ;
-(void)_addHomeVideo:(id)arg1 ;
-(void)_addMovie:(id)arg1 ;
-(void)_addMovieRental:(id)arg1 ;
-(void)removeDownloadedMediaForIdentifier:(id)arg1 ;
-(void)_removeEntityWithIdentifier:(id)arg1 ;
-(void)updateEntity:(id)arg1 propertyName:(id)arg2 propertyValue:(id)arg3 ;
-(BOOL)saveToFileURL:(id)arg1 error:(out id*)arg2 ;
-(void)_removeMovie:(id)arg1 ;
-(void)_removeMovieRental:(id)arg1 ;
-(void)_removeHomeVideo:(id)arg1 ;
-(void)_removeShow:(id)arg1 ;
-(void)_removeSeason:(id)arg1 fromShow:(id)arg2 ;
-(void)_removeEpisode:(id)arg1 fromSeason:(id)arg2 ;
-(void)setDatabaseFileDispatchSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)_parseDatabaseAndSendNotification;
-(void)addEntity:(id)arg1 showIdentifier:(id)arg2 seasonIdentifier:(id)arg3 ;
-(void)removeEntityWithIdentifier:(id)arg1 ;
-(void)updateEntityWithIdentifier:(id)arg1 propertyName:(id)arg2 propertyValue:(id)arg3 ;
-(void)setSerialDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_source>)databaseFileDispatchSource;
-(void)setHomeVideoByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setMovieByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setMovieRentalByIdentifier:(NSMutableDictionary *)arg1 ;
-(void)setShowByIdentifier:(NSMutableDictionary *)arg1 ;
@end

