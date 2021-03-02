/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SilexWeb/SilexWeb-Structs.h>
#import <SilexWeb/SWConfiguration.h>

@protocol SWLocation;
@class NSString, NSLocale, NSDictionary, NSURL;

@interface SWMutableConfiguration : SWConfiguration {

	NSString* storeFront;
	NSLocale* locale;
	NSString* contentSizeCategory;
	NSDictionary* dataSources;
	id<SWLocation> location;
	NSURL* sourceURL;
	CGSize canvasSize;
	CGRect contentFrame;

}

@property (nonatomic,copy) NSString * storeFront; 
@property (nonatomic,copy) NSLocale * locale; 
@property (nonatomic,copy) NSString * contentSizeCategory; 
@property (assign,nonatomic) CGSize canvasSize; 
@property (assign,nonatomic) CGRect contentFrame; 
@property (nonatomic,copy) NSDictionary * dataSources; 
@property (nonatomic,copy) id<SWLocation> location; 
@property (nonatomic,copy) NSURL * sourceURL; 
-(CGRect)contentFrame;
-(NSLocale *)locale;
-(void)setContentFrame:(CGRect)arg1 ;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSString *)contentSizeCategory;
-(void)setContentSizeCategory:(NSString *)arg1 ;
-(NSDictionary *)dataSources;
-(void)setLocale:(NSLocale *)arg1 ;
-(id<SWLocation>)location;
-(CGSize)canvasSize;
-(void)setCanvasSize:(CGSize)arg1 ;
-(NSString *)storeFront;
-(void)setLocation:(id<SWLocation>)arg1 ;
-(void)setDataSources:(NSDictionary *)arg1 ;
-(void)setStoreFront:(NSString *)arg1 ;
@end
