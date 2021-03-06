/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface UISearchToken : NSObject {

	id _representedObject;
	NSString* _text;
	UIImage* _image;

}

@property (nonatomic,copy) NSString * text;                     //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIImage * image;                   //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) id representedObject;              //@synthesize representedObject=_representedObject - In the implementation block
+(id)tokenWithImage:(id)arg1 ;
+(id)tokenWithIcon:(id)arg1 text:(id)arg2 ;
-(UIImage *)image;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)_initToken;
-(void)setImage:(UIImage *)arg1 ;
-(void)setRepresentedObject:(id)arg1 ;
-(id)representedObject;
@end

