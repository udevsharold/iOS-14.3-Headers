/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3ImportOperation.h>

@class NSArray;

@interface ML3SetCloudIDImportOperation : ML3ImportOperation {

	NSArray* _trackInfo;
	NSArray* _playlistInfo;

}
-(void)main;
-(unsigned long long)importSource;
-(BOOL)_performImportWithTransaction:(id)arg1 ;
-(BOOL)_importTracksUsingImportSession:(ML3ImportSession*)arg1 ;
-(BOOL)_importPlaylistsUsingImportSession:(ML3ImportSession*)arg1 ;
@end

