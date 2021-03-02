/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUISnippet.h>

@class SAUIImageResource, NSString, NSArray, SALocalSearchBusiness2;

@interface SAMovieV2ShowtimeSnippet : SAUISnippet

@property (nonatomic,retain) SAUIImageResource * attributionLogo; 
@property (nonatomic,copy) NSString * movieName; 
@property (nonatomic,copy) NSArray * showtimes; 
@property (nonatomic,retain) SALocalSearchBusiness2 * theater; 
@property (nonatomic,copy) NSString * theaterName; 
+(id)showtimeSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)showtimeSnippet;
-(id)groupIdentifier;
-(SAUIImageResource *)attributionLogo;
-(NSString *)movieName;
-(void)setMovieName:(NSString *)arg1 ;
-(SALocalSearchBusiness2 *)theater;
-(void)setAttributionLogo:(SAUIImageResource *)arg1 ;
-(NSArray *)showtimes;
-(void)setShowtimes:(NSArray *)arg1 ;
-(void)setTheater:(SALocalSearchBusiness2 *)arg1 ;
-(NSString *)theaterName;
-(void)setTheaterName:(NSString *)arg1 ;
-(id)encodedClassName;
@end
