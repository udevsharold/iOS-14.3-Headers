/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MapsSuggestionsTrafficAndETAResult : NSObject {

	BOOL _isSuccess;
	double _seconds;
	NSString* _shortTrafficString;
	NSString* _longTrafficString;
	NSString* _writtenRouteName;
	NSString* _spokenRouteName;

}

@property (assign,nonatomic) BOOL isSuccess;                           //@synthesize isSuccess=_isSuccess - In the implementation block
@property (assign,nonatomic) double seconds;                           //@synthesize seconds=_seconds - In the implementation block
@property (nonatomic,copy) NSString * shortTrafficString;              //@synthesize shortTrafficString=_shortTrafficString - In the implementation block
@property (nonatomic,copy) NSString * longTrafficString;               //@synthesize longTrafficString=_longTrafficString - In the implementation block
@property (nonatomic,copy) NSString * writtenRouteName;                //@synthesize writtenRouteName=_writtenRouteName - In the implementation block
@property (nonatomic,copy) NSString * spokenRouteName;                 //@synthesize spokenRouteName=_spokenRouteName - In the implementation block
-(double)seconds;
-(BOOL)isSuccess;
-(void)setIsSuccess:(BOOL)arg1 ;
-(NSString *)shortTrafficString;
-(void)setShortTrafficString:(NSString *)arg1 ;
-(NSString *)longTrafficString;
-(void)setLongTrafficString:(NSString *)arg1 ;
-(NSString *)writtenRouteName;
-(NSString *)spokenRouteName;
-(void)setWrittenRouteName:(NSString *)arg1 ;
-(void)setSpokenRouteName:(NSString *)arg1 ;
-(void)setSeconds:(double)arg1 ;
-(id)initWithGEOTrafficAndETAResult:(id)arg1 ;
@end

