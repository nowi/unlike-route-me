//
//  CoreAnimationRenderer.h
//  RouteMe
//
//  Created by Joseph Gentle on 9/09/08.
//  Copyright 2008 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MapRenderer.h"

@class LayeredTileImageSet;

@interface CoreAnimationRenderer : MapRenderer {
	CALayer *layer;
//	LayeredTileImageSet *imageSet;
}

@end
