/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class NSMutableDictionary, NSString;

@interface CIMetalWrapper : CIFilter {

	NSMutableDictionary* _dict;
	NSString* inputFilterName;

}

@property (retain) NSMutableDictionary * _dict;              //@synthesize dict=_dict - In the implementation block
@property (copy) NSString * inputFilterName; 
-(NSMutableDictionary *)_dict;
-(id)init;
-(NSString *)inputFilterName;
-(id)dummyImagesForImages:(id)arg1 ;
-(void)setInputFilterName:(NSString *)arg1 ;
-(void)dealloc;
-(id)attributes;
-(id)outputImage;
-(id)inputKeys;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)set_dict:(NSMutableDictionary *)arg1 ;
@end

