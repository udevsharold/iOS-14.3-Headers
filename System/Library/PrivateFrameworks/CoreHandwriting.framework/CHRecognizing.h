/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSLocale, NSCharacterSet;


@protocol CHRecognizing <NSObject>
@property (nonatomic,readonly) int recognitionMode; 
@property (assign,nonatomic) int contentType; 
@property (assign,nonatomic) int autoCapitalizationMode; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (assign,nonatomic) unsigned long long maxRecognitionResultCount; 
@property (nonatomic,retain) NSCharacterSet * activeCharacterSet; 
@property (assign,nonatomic) CGSize minimumDrawingSize; 
@property (nonatomic,readonly) BOOL enableCachingIfAvailable; 
@property (nonatomic,readonly) BOOL enableGen2ModelIfAvailable; 
@property (nonatomic,readonly) BOOL enableGen2CharacterLMIfAvailable; 
@required
-(NSLocale *)locale;
-(void)setContentType:(int)arg1;
-(int)contentType;
-(void)setAutoCapitalizationMode:(int)arg1;
-(id)initWithMode:(int)arg1 locale:(id)arg2;
-(void)setActiveCharacterSet:(id)arg1;
-(void)setMinimumDrawingSize:(CGSize)arg1;
-(int)autoCapitalizationMode;
-(BOOL)enableCachingIfAvailable;
-(BOOL)enableGen2ModelIfAvailable;
-(BOOL)enableGen2CharacterLMIfAvailable;
-(int)recognitionMode;
-(unsigned long long)maxRecognitionResultCount;
-(void)setMaxRecognitionResultCount:(unsigned long long)arg1;
-(NSCharacterSet *)activeCharacterSet;
-(CGSize)minimumDrawingSize;

@end

