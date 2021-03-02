/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, ARUISpriteTexture;

@interface ARUISpriteSheet : NSObject <NSCopying> {

	NSArray* _sprites;
	ARUISpriteTexture* _texture;

}

@property (nonatomic,readonly) ARUISpriteTexture * texture;              //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) NSArray * sprites;                        //@synthesize sprites=_sprites - In the implementation block
-(ARUISpriteTexture *)texture;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSArray *)sprites;
-(id)initWithSpriteSheet:(id)arg1 ;
-(id)initWithTexture:(id)arg1 sprites:(id)arg2 ;
@end
