/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SPFinder.framework/SPFinder
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError, NSArray, SPSearchResultMarker;

@interface SPBeaconPayloadCacheSearchResult : NSObject <NSSecureCoding> {

	NSError* _error;
	NSArray* _fileURLs;
	SPSearchResultMarker* _searchResultMarker;

}

@property (nonatomic,copy) NSArray * fileURLs;                                       //@synthesize fileURLs=_fileURLs - In the implementation block
@property (nonatomic,retain) SPSearchResultMarker * searchResultMarker;              //@synthesize searchResultMarker=_searchResultMarker - In the implementation block
@property (nonatomic,copy) NSError * error;                                          //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSError *)error;
-(NSArray *)fileURLs;
-(id)initWithCoder:(id)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(void)setFileURLs:(NSArray *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setSearchResultMarker:(SPSearchResultMarker *)arg1 ;
-(SPSearchResultMarker *)searchResultMarker;
-(id)initWithFileURLs:(id)arg1 searchResultMarker:(id)arg2 error:(id)arg3 ;
@end

